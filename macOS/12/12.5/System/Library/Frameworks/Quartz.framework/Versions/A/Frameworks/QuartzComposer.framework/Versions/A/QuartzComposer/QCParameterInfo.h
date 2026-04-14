@interface QCParameterInfo : NSObject {
    int type;
    unsigned long long size;
}

+ (id)skipParameter;
+ (id)infoWithType:(int)a0 size:(unsigned long long)a1;

- (BOOL)isEqualTo:(id)a0;
- (id)initWithType:(int)a0 size:(unsigned long long)a1;

@end
