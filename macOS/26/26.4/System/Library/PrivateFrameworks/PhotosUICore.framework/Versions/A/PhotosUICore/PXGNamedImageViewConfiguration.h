@class NSString, NSBundle;

@interface PXGNamedImageViewConfiguration : NSObject <PXGViewUserData>

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) long long contentMode;
@property (retain, nonatomic) NSBundle *bundle;
@property (nonatomic) long long floatingAxis;
@property (readonly, nonatomic) long long viewFloatingAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageName:(id)a0 contentMode:(long long)a1 bundle:(id)a2;

@end
