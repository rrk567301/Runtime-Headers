@class NSUUID;

@interface C2MultipeerChunkDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestUUID;
@property (nonatomic) BOOL chunkDataRequested;
@property (copy, nonatomic) id /* block */ chunkDataCallback;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
