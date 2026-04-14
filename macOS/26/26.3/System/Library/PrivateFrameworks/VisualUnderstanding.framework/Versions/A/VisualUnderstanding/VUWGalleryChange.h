@class NSUUID, VUWGalleryEntityIdentifier;

@interface VUWGalleryChange : NSObject {
    void /* unknown type, empty encoding */ _tag;
}

@property (nonatomic) long long updateType;
@property (nonatomic, retain) VUWGalleryEntityIdentifier *entityIdentifier;
@property (nonatomic, copy) NSUUID *tag;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUpdateType:(long long)a0 entityIdentifier:(id)a1 tag:(id)a2;

@end
