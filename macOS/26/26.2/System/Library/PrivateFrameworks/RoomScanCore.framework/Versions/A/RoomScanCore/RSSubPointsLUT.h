@interface RSSubPointsLUT : NSObject <NSCopying> {
    float _camW;
    float _camH;
    unsigned long long _begin;
    unsigned long long _end;
    unsigned long long _size;
    unsigned long long _rawSize;
    struct { void /* unknown type, empty encoding */ columns[3]; } _intrinsics;
    struct { void /* unknown type, empty encoding */ columns[4]; } _pose;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
