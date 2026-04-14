@class NSString;

@interface PXPhotosDetailsVisualLookupData : NSObject

@property (copy, nonatomic) NSString *displayMessage;
@property (copy, nonatomic) NSString *glyphImageName;
@property (copy, nonatomic) NSString *visualDomain;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)_isEqualToVisualLookupData:(id)a0;
- (id)initWithGlyphName:(id)a0 visualDomain:(id)a1 displayMessage:(id)a2;

@end
