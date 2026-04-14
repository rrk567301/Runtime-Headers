@class NSUUID;

@interface GDVUContext : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, copy) NSUUID *moment;
@property (nonatomic, copy) NSUUID *asset;
@property (nonatomic) long long source;

- (void).cxx_destruct;
- (id)init;

@end
