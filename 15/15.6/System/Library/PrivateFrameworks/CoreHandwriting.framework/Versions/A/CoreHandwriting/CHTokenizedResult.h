@class NSIndexSet, NSString;

@interface CHTokenizedResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSIndexSet *strokeIndexes;
@property (readonly, nonatomic) char isMinimalDrawingResult;
@property (readonly, copy, nonatomic) NSString *topTranscription;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSString *recognizerDebugDescription;

+ (id)loadFromFile:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)writeToFile;
- (id)initWithIsMinimalDrawingResult:(char)a0;
- (char)isEqualToTokenizedResult:(id)a0;
- (id)writeToFileInFolder:(id)a0 basename:(id)a1;

@end
