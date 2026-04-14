@class NSString, NSColor;

@interface PXCuratedLibraryLabelConfiguration : NSObject <PXGViewUserData>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) NSColor *textColor;
@property (readonly, nonatomic) long long viewFloatingAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
