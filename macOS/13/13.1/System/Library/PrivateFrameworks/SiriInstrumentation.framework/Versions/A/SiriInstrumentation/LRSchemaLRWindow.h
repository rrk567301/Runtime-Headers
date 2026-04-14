@class NSArray, NSData;

@interface LRSchemaLRWindow : SISchemaInstrumentationMessage {
    struct { unsigned char startTimeInNs : 1; unsigned char endTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long startTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) BOOL hasEndTimeInNs;
@property (copy, nonatomic) NSArray *activeRedactionPolicies;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteStartTimeInNs;
- (void)deleteEndTimeInNs;
- (void)clearActiveRedactionPolicies;
- (void)deleteActiveRedactionPolicies;
- (void)addActiveRedactionPolicies:(int)a0;
- (unsigned long long)activeRedactionPoliciesCount;
- (int)activeRedactionPoliciesAtIndex:(unsigned long long)a0;

@end
