@class NSString;

@interface MUICategoryMailboxCount : NSObject <EFPubliclyDescribable>

@property (nonatomic) long long primaryCount;
@property (nonatomic) long long fullCount;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
