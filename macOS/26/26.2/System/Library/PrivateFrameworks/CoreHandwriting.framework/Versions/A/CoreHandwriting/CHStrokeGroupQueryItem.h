@class NSArray, NSDictionary, NSLocale, NSNumber, CHTokenizedMathResult;

@interface CHStrokeGroupQueryItem : NSObject {
    NSDictionary *__tokenizedTextResultsByLocale;
    NSDictionary *__errorsByLocale;
    long long __strokeClassification;
}

@property (readonly, nonatomic) NSNumber *strokeGroupIdentifier;
@property (readonly, nonatomic) NSNumber *strokeGroupStableIdentifier;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, nonatomic) long long strokeGroupType;
@property (readonly, copy, nonatomic) NSLocale *preferredLocale;
@property (readonly, copy, nonatomic) CHTokenizedMathResult *mathResult;

+ (id)descriptionForStrokeGroupQueryItemType:(long long)a0;

- (void).cxx_destruct;
- (id)description;
- (long long)strokeClassification;
- (id)textRecognitionResultForLocale:(id)a0 error:(id *)a1;

@end
