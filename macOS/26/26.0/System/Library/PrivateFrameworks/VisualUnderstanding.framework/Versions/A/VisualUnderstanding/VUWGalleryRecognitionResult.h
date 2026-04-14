@class NSNumber, VUWGalleryEntityIdentifier, NSUUID;

@interface VUWGalleryRecognitionResult : NSObject {
    void /* unknown type, empty encoding */ _tag;
}

@property (nonatomic, retain) VUWGalleryEntityIdentifier *entityIdentifier;
@property (nonatomic, retain) NSNumber *confidence;
@property (nonatomic, copy) NSUUID *tag;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEntityIdentifier:(id)a0 tag:(id)a1 confidence:(id)a2;

@end
