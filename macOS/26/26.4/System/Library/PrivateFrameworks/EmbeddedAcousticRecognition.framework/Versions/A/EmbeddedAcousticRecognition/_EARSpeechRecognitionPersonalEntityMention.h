@class NSString;

@interface _EARSpeechRecognitionPersonalEntityMention : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *mention;
@property (readonly, nonatomic) float score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMention:(id)a0 score:(float)a1;

@end
