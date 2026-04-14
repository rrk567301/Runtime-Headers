@class NSUUID;

@interface VUWTag : NSObject {
    void /* unknown type, empty encoding */ _UUID;
}

@property (nonatomic) long long tagType;
@property (nonatomic, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)a0 uuid:(id)a1;

@end
