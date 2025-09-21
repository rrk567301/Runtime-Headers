@class NSDictionary, NSUUID, NSString, NSArray, NSSet, NSDate, NSData;

@interface AXSSPunctuationGroup : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) NSSet *autoSwitchContexts;
@property (retain, nonatomic) NSUUID *basePunctuationUUID;
@property (nonatomic) unsigned short version;
@property (nonatomic) char inCloud;
@property (retain, nonatomic) NSString *ckChangeTag;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSDate *ckRecordProcessDate;
@property (nonatomic) char inDatabase;
@property (readonly, nonatomic) char isSystemPunctuationGroup;
@property (readonly, nonatomic) NSData *jsonRepresentation;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;

+ (id)punctuationGroupFromJSONRepresentation:(id)a0;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
