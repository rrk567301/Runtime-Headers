@class _INPBDateTime, NSString, _INPBDataString, NSArray;

@interface _INPBTaskList : PBCodable <_INPBTaskList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDateTime *createdDateTime;
@property (readonly, nonatomic) char hasCreatedDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (readonly, nonatomic) char hasGroupName;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property (readonly, nonatomic) char hasModifiedDateTime;
@property (copy, nonatomic) NSArray *tasks;
@property (readonly, nonatomic) unsigned long long tasksCount;
@property (retain, nonatomic) _INPBDataString *title;
@property (readonly, nonatomic) char hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)tasksType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTasks:(id)a0;
- (void)clearTasks;
- (id)tasksAtIndex:(unsigned long long)a0;

@end
