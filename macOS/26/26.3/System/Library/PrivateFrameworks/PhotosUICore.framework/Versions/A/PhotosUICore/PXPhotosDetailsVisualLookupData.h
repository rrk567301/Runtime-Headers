@class NSString;

@interface PXPhotosDetailsVisualLookupData : NSObject

@property (copy, nonatomic) NSString *displayMessage;
@property (copy, nonatomic) NSString *glyphImageName;
@property (copy, nonatomic) NSString *visualDomain;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isEqualToVisualLookupData:(id)a0;
- (id)initWithGlyphName:(id)a0 visualDomain:(id)a1 displayMessage:(id)a2;

@end
