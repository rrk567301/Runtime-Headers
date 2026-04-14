@class NSString;
@protocol ABLinkingInfoDataSource;

@interface ABLinksUnlinkedRecordsCommandFactory : NSObject <ABLinkPeopleCommandFactory> {
    id<ABLinkingInfoDataSource> _adapter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAdapter:(id)a0;
- (Class)builtCommandClass;
- (id)fetchPeople;
- (id)buildCommand;
- (id)analyzePeopleInAddressBook;
- (id)separatePeopleByAccount:(id)a0;
- (id)findPeopleNeedingLinked:(id)a0;
- (id)optimizeOutSingleRecords:(id)a0;

@end
