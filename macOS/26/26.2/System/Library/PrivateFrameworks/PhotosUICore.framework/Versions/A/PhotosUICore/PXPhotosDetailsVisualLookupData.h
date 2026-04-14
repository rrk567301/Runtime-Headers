@class NSString;

@interface PXPhotosDetailsVisualLookupData : NSObject

@property (copy, nonatomic) NSString *displayMessage;
@property (copy, nonatomic) NSString *glyphImageName;
@property (copy, nonatomic) NSString *visualDomain;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)_isEqualToVisualLookupData:(id)a0;
- (id)initWithGlyphName:(id)a0 visualDomain:(id)a1 displayMessage:(id)a2;

@end
