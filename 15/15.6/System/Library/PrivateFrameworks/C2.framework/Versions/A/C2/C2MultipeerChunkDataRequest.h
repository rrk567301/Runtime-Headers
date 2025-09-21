@class NSUUID;

@interface C2MultipeerChunkDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestUUID;
@property (nonatomic) char chunkDataRequested;
@property (copy, nonatomic) id /* block */ chunkDataCallback;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
