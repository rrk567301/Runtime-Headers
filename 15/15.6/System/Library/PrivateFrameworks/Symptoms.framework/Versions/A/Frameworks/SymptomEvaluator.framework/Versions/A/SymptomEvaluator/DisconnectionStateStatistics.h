@class NSSet, NSString, NSMutableArray;

@interface DisconnectionStateStatistics : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSSet *daysOfWeek;
@property (readonly) unsigned long long periodId;
@property (readonly) NSString *disconnectedFromNetworkId;
@property (readonly) NSString *connectToNetworkId;
@property (readonly) NSMutableArray *networkStateRecords;
@property (readonly) unsigned long long averageDisconnectionLength;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)calculateAverageLength;
- (id)initWithDaysOfWeek:(id)a0 periodId:(unsigned long long)a1 forNetworkStateRecord:(id)a2;
- (char)isMergeableWithDisconnectionStateStatistics:(id)a0;
- (void)mergeDisconnectionStateStatistics:(id)a0;

@end
