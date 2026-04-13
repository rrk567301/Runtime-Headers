@class NSData, NSMutableData;

@interface TIKeyboardCandidateResultSetCoder : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSMutableData *mutableData;
@property (nonatomic) unsigned long long offset;
@property (readonly, nonatomic) const char *bytes;
@property (readonly, nonatomic) const char *currentPosition;
@property (nonatomic) BOOL offsetHasPassedEndOfData;

+ (Class)classFromCandidateType:(int)a0;
+ (id)candidateTypeToClassNameMap;
+ (id)encodeWithCandidateResultSet:(id)a0;
+ (id)decodeWithData:(id)a0;

- (void).cxx_destruct;
- (void)encodeBool:(BOOL)a0;
- (void)encodeDouble:(double)a0;
- (void)encodeString:(id)a0;
- (id)initForEncoding;
- (id)initForDecodingWithData:(id)a0;
- (id)initWithData:(id)a0 mutableData:(id)a1;
- (BOOL)isDecoding;
- (id)decodeCandidate;
- (BOOL)decodeBool;
- (void)encodeByte:(unsigned char)a0;
- (unsigned char)decodeByte;
- (void)readNumberOfBytes:(unsigned long long)a0 into:(void *)a1;
- (void)encodeShort:(unsigned short)a0;
- (unsigned short)decodeShort;
- (double)decodeDouble;
- (void)encodeUInt32:(unsigned int)a0;
- (unsigned int)decodeUInt32;
- (void)encodeUInt64:(unsigned long long)a0;
- (unsigned long long)decodeUInt64;
- (id)decodeString;
- (void)encodeStringArray:(id)a0;
- (id)decodeStringArray;
- (void)encodePointerValueArray:(id)a0;
- (id)decodePointerValueArray;
- (id)dataFromCandidateResultSet:(id)a0;
- (id)candidateResultSet;

@end
