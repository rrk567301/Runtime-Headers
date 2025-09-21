@class NSString, MRPlayerPath, NSData, _MRMusicHandoffSessionProtobuf, NSObject;
@protocol OS_dispatch_queue;

@interface MRMusicHandoffSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) _MRMusicHandoffSessionProtobuf *protobuf;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MRPlayerPath *sourcePlayerPath;
@property (readonly, nonatomic) MRPlayerPath *destinationPlayerPath;

+ (void)setHandoffSessionHandlerForPlayerPath:(id)a0 handler:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobufData:(id)a0;
- (void)updateWithEvent:(id)a0;
- (id)initWithIdentifier:(id)a0 sourcePlayerPath:(id)a1 destinationPlayerPath:(id)a2;

@end
