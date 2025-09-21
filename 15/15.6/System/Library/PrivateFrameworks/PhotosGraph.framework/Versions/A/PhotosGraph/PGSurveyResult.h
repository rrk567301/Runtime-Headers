@class NSString, NSDictionary, NSDate;

@interface PGSurveyResult : NSObject <PGQuestion>

@property (copy, nonatomic) NSString *entityIdentifier;
@property (copy, nonatomic) NSString *momentIdentifier;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short state;
@property (nonatomic) unsigned short entityType;
@property (nonatomic) unsigned short displayType;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) short questionVersion;
@property (readonly, nonatomic) double localFactoryScore;
@property (nonatomic) double score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)remove;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;
- (char)isEquivalentToPersistedQuestion:(id)a0;
- (char)isEquivalentToSurveyResult:(id)a0;

@end
