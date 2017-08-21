#ifndef CODE_ChimericSegment
#define CODE_ChimericSegment

#include "IncludeDefine.h"
#include "Parameters.h"
#include "Transcript.h"
#include "ParametersChimeric.h"

class ChimericSegment
{//
    public:
        Transcript  &align;     //alignment
        uint roS,roE,str;     //start/end/strand in original read coordinates
        Parameters &P;
        ParametersChimeric &pCh;
        ChimericSegment(Parameters &Pin, Transcript &alignIn); //allocate
        
        bool segmentCheck();//check if chimeric segment is good
    private:
};

#endif