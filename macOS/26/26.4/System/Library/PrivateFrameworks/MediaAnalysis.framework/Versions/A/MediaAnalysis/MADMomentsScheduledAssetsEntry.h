@class NSString, NSDate;

@interface MADMomentsScheduledAssetsEntry : NSObject

@property (copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSDate *requestDate;
@property (nonatomic) unsigned long long taskID;

+ (id)entryWithLocalIdentifier:(id)a0 requestDate:(id)a1 taskID:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)a0 requestDate:(id)a1 taskID:(unsigned long long)a2;

@end
