@class NSString, NSArray;

@interface CNEmailAddressContactPredicate : CNPredicate <CNSuggestedContactPredicate, CNMAIDPredicate, CNCoreRecentsPredicate, CNCDContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSArray *groupIdentifiers;
@property (readonly, nonatomic) BOOL returnsMultipleResults;

+ (BOOL)supportsSecureCoding;

@end
