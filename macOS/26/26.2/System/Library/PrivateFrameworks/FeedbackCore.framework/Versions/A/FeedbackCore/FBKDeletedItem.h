@class NSNumber;

@interface FBKDeletedItem : NSObject

@property (retain, nonatomic) NSNumber *remoteID;
@property (nonatomic) unsigned long long type;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
