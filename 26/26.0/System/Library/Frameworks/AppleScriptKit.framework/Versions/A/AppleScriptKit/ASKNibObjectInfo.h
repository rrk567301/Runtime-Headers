@class NSString, NSMutableArray;

@interface ASKNibObjectInfo : NSObject <NSCoding> {
    long long _ID;
    NSString *_name;
    NSString *_scriptName;
    NSMutableArray *_eventHandlerNames;
    int _scope;
}

+ (void)initialize;

- (int)scope;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)setScope:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setID:(long long)a0;
- (id)init;
- (id)name;
- (BOOL)hasInfo;
- (id)initWithCoder:(id)a0;
- (long long)ID;
- (id)scriptName;
- (void)addEventHandlerName:(id)a0;
- (id)eventHandlerNames;
- (unsigned long long)indexOfEventHandlerName:(id)a0;
- (void)removeEventHandlerName:(id)a0;
- (void)setEventHandlerNames:(id)a0;
- (void)setScriptName:(id)a0;

@end
