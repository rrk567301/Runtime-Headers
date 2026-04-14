@class NSNumber, NSArray, NSString;

@interface VUWGalleryPersonalizationOptions : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ boundingBox;
    void /* function */ adapterIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSNumber *seed;
@property (nonatomic, copy) NSArray *boundingBox;
@property (nonatomic, copy) NSString *adapterIdentifier;
@property (nonatomic, retain) NSNumber *keyObservation;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
