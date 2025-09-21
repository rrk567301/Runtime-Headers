@class NSSet, NSUUID, NSData, SFSession, NSDictionary, SFDevice;

@interface SFMessage : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSSet *deviceIDs;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) SFSession *session;
@property (copy, nonatomic) NSData *bodyData;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) char expectsResponse;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (retain, nonatomic) SFDevice *peerDevice;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;

@end
