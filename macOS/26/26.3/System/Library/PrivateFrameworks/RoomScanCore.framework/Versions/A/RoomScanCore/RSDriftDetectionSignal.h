@interface RSDriftDetectionSignal : NSObject <NSCopying> {
    float _score;
    long long _type;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
