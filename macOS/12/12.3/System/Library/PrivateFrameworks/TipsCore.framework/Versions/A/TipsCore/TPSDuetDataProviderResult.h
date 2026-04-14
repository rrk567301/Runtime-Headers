@class NSString, _DKEvent, NSDate;

@interface TPSDuetDataProviderResult : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) double creationDelay;
@property (readonly, nonatomic, getter=isRemoteEvent) BOOL remoteEvent;
@property (retain, nonatomic) _DKEvent *event;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)identifier;
- (id)endDate;
- (id)startDate;
- (id)creationDate;
- (id)localCreationDate;
- (double)creationDelay;

@end
