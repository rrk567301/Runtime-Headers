@class NSUUID;

@interface ISComponentIdentifier : NSObject {
    void /* unknown type, empty encoding */ componentIdentifier;
}

@property (nonatomic, readonly) int componentName;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(int)a0 uuid:(id)a1;

@end
