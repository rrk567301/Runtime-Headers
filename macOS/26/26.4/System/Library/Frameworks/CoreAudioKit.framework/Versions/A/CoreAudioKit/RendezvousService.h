@class NSString, NSDictionary;

@interface RendezvousService : NSObject {
    int mInstanceCount;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *codedName;
@property (copy, nonatomic) NSDictionary *txtRecord;

- (void).cxx_destruct;
- (int)changeRefCount:(int)a0;
- (id)init:(id)a0 name:(id)a1 inDomain:(id)a2;

@end
