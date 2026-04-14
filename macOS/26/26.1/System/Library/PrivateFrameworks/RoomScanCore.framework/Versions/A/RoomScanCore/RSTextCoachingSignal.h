@class NSString;

@interface RSTextCoachingSignal : NSObject <NSCopying> {
    float _score;
    long long _type;
    long long _state;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) float score;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
