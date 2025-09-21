@class NSDictionary, NSString, NSData;

@interface CNWallpaperMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *fontDescription;
@property (retain, nonatomic) NSDictionary *fontColorDescription;
@property (retain, nonatomic) NSDictionary *backgroundColorDescription;
@property (retain, nonatomic) NSString *extensionBundleID;
@property (nonatomic, getter=isVertical) char vertical;
@property (retain, nonatomic) NSData *visualFingerprintData;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)log;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithFontDescription:(id)a0 fontColorDescription:(id)a1 backgroundColorDescription:(id)a2 extensionBundleID:(id)a3 vertical:(char)a4 visualFingerprintData:(id)a5;

@end
