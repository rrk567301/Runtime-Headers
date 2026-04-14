@class MessageListSectionDataSource, NSString;

@interface MessageListSectionUpdate : NSObject <EFPubliclyDescribable>

@property (retain, nonatomic) MessageListSectionDataSource *sectionDataSource;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL cleanSnapshot;
@property (nonatomic) BOOL immediateCompletion;
@property (copy, nonatomic) id /* block */ prepareHandler;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
