@class NSString;

@interface FlexTransition : NSObject <NSCopying, FMNSDictionaryCoding>

@property (readonly, nonatomic) char prevented;
@property (readonly, nonatomic) long long fadeOut;
@property (readonly, nonatomic) long long fadeIn;
@property (readonly, copy, nonatomic) NSString *transitionSegmentName;
@property (readonly, nonatomic) char useNextSegmentForFadeOut;

+ (long long)validFadeLengthForLength:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)encodeAsDictionary;
- (id)initWithTransitionSegmentNamed:(id)a0 prevented:(char)a1 fadeOut:(long long)a2 fadeIn:(long long)a3 useNextSegmentForFadeOut:(char)a4;
- (char)isDefaultTransition;

@end
