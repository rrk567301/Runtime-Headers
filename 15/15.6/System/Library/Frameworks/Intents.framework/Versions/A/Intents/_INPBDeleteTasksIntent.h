@class NSArray, NSString, _INPBTaskList, _INPBIntentMetadata;

@interface _INPBDeleteTasksIntent : PBCodable <_INPBDeleteTasksIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char all : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char all;
@property (nonatomic) char hasAll;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBTaskList *taskList;
@property (readonly, nonatomic) char hasTaskList;
@property (copy, nonatomic) NSArray *tasks;
@property (readonly, nonatomic) unsigned long long tasksCount;
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
