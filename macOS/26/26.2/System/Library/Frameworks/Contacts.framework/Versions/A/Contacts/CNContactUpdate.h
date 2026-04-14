@class NSString;

@interface CNContactUpdate : NSObject <CNContactUpdate_PosterData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateMultiValueWithDiff:(id)a0 property:(id)a1;
+ (id)updateWithValue:(id)a0 property:(id)a1;

- (id)posterDataChangeRequestsWithContactIdentifier:(id)a0;

@end
