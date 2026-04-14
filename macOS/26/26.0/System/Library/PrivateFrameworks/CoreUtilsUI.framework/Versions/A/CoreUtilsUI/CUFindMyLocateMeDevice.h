@class NSString;

@interface CUFindMyLocateMeDevice : NSObject {
    void /* function */ findMyIdentifier;
    void /* function */ idsID;
    void /* function */ name;
}

@property (nonatomic, readonly) NSString *findMyIdentifier;
@property (nonatomic, readonly) NSString *idsID;
@property (nonatomic, readonly) BOOL isThisDevice;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFindMyIdentifier:(id)a0 idsID:(id)a1 isThisDevice:(BOOL)a2 name:(id)a3;

@end
