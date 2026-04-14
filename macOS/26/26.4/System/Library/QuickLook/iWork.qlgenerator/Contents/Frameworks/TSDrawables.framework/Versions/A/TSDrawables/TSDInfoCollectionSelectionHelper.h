@class NSSet, NSString;

@interface TSDInfoCollectionSelectionHelper : NSObject

@property (readonly, nonatomic) NSSet *modelInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSString *UUIDDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInteractiveInfos:(id)a0;
- (id)initWithInteractiveInfos:(id)a0 nonInteractiveInfos:(id)a1;

@end
