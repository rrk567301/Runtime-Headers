@class NSUUID;

@interface VUWGalleryContext : NSObject {
    void /* unknown type, empty encoding */ _moment;
    void /* unknown type, empty encoding */ _asset;
    void /* unknown type, empty encoding */ _source;
}

@property (nonatomic, copy) NSUUID *moment;
@property (nonatomic, copy) NSUUID *asset;
@property (nonatomic) long long source;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMoment:(id)a0 asset:(id)a1 source:(long long)a2;

@end
