@class NSUUID;
@protocol ASDRequestObserver;

@interface ASDRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<ASDRequestObserver> observer;
@property (readonly, nonatomic) NSUUID *requestID;

+ (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
