@class VNSession;

@interface VNWeakSessionWrapper : NSObject {
    VNSession *_weakSession;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (id)sessionAndReturnError:(id *)a0;

@end
