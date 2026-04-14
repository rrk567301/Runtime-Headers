@class NSString;

@interface BSColor : NSObject <BSXPCAutoCoding, NSCopying> {
    struct CGColor { } *_colorRef;
}

@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (void)initialize;
+ (id)blackColor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)membersForCoder;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToColor:(id)a0;

@end
