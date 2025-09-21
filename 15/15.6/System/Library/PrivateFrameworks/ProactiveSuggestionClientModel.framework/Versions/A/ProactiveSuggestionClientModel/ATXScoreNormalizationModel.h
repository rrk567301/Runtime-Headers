@class NSMutableArray, ATXScoreNormalizationParameters;

@interface ATXScoreNormalizationModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *circularBuffer;
@property int bufferHead;
@property int bufferSize;
@property (nonatomic) char isBufferSorted;
@property (retain, nonatomic) ATXScoreNormalizationParameters *parameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameters:(id)a0;
- (void)resetBuffer;
- (void)addScore:(id)a0;
- (id)normalizeScore:(id)a0;
- (void)getStateReadyForNormalization;
- (id)initWithParameters:(id)a0 circularBuffer:(id)a1 bufferHead:(int)a2 isBufferSorted:(char)a3;

@end
