@class NSString, NSMutableString, NSMutableArray;

@interface TIZhuyinInputManager : NSObject

@property unsigned short syllableConsonantBuffer;
@property unsigned short syllableMedialBuffer;
@property unsigned short syllableVowelBuffer;
@property unsigned short syllableToneBuffer;
@property (retain) NSMutableString *inputBuffer;
@property (retain) NSMutableArray *inputBufferSplittingLengths;
@property (retain) NSMutableArray *composedBufferSplittingLengths;
@property (retain) NSMutableString *composedBuffer;
@property char leftSingleQuotationMarkInserted;
@property char leftDoubleQuotationMarkInserted;
@property (readonly) unsigned long long bufferSplittingLengthsIndex;
@property (readonly) unsigned long long composedBufferCursorLocation;
@property (readonly) char syllableBuffersValid;
@property (readonly) unsigned long long syllableBuffersAggregateLength;
@property (readonly) NSString *syllableBuffersAggregateString;
@property unsigned long long inputCursorLocation;
@property (readonly, retain) NSString *composedText;
@property (readonly) unsigned long long cursorLocation;
@property (readonly) char syllableBuffersOccupied;
@property (readonly) char isCursorAtEnd;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)convertToFullWidth:(id)a0;
- (char)deleteFromInput;
- (char)addZhuyinInput:(id)a0;
- (char)addNonZhuyinInput:(id)a0;
- (char)addZhuyinInput:(id)a0 withUpdatingComposedTextToClient:(char)a1;
- (char)forwardDeleteFromInput;
- (id)inputStringForCharacters:(id)a0;
- (id)readingsLengths:(id)a0;
- (void)resetSyllableBuffers;
- (char)revertCurrentCharacterToTonelessZhuyin;
- (char)shouldDirectlyCommitInput:(id)a0;
- (unsigned long long)inputBufferIndexOf:(unsigned long long)a0;
- (void)moveCursorBackward;
- (void)moveCursorForward;
- (void)updateWithCandidate:(id)a0 isWholeInputCandidate:(char)a1;

@end
