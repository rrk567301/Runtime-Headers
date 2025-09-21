@class NSString, SECSFAAction, NSData, SECSFAVersionMatch;

@interface SECSFAEventRule : PBCodable <NSCopying> {
    struct { unsigned char repeatAfterSeconds : 1; unsigned char eventClass : 1; unsigned char matchOnFirstFailure : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) BOOL hasMatch;
@property (retain, nonatomic) NSData *match;
@property (readonly, nonatomic) BOOL hasAction;
@property (retain, nonatomic) SECSFAAction *action;
@property (nonatomic) BOOL hasRepeatAfterSeconds;
@property (nonatomic) long long repeatAfterSeconds;
@property (readonly, nonatomic) BOOL hasProcessName;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) BOOL hasEventClass;
@property (nonatomic) int eventClass;
@property (readonly, nonatomic) BOOL hasVersions;
@property (retain, nonatomic) SECSFAVersionMatch *versions;
@property (nonatomic) BOOL hasMatchOnFirstFailure;
@property (nonatomic) BOOL matchOnFirstFailure;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsEventClass:(id)a0;
- (id)eventClassAsString:(int)a0;

@end
