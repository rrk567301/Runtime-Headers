@class NSString, NSDate;
@protocol ATXModeEntityProtocol;

@interface ATXModeEvent : NSObject <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (retain, nonatomic) id<ATXModeEntityProtocol> entity;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)json;
- (id)jsonRawData;
- (id)init;
- (id)serialize;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 entity:(id)a2;

@end
