@class NSString, NSMutableArray;

@interface ASKNibObjectInfo : NSObject <NSCoding> {
    long long _ID;
    NSString *_name;
    NSString *_scriptName;
    NSMutableArray *_eventHandlerNames;
    int _scope;
}

+ (void)initialize;

- (long long)ID;
- (void)setID:(long long)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void)setName:(id)a0;
- (void)setScope:(int)a0;
- (int)scope;
- (id)init;
- (BOOL)hasInfo;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)scriptName;
- (void)addEventHandlerName:(id)a0;
- (id)eventHandlerNames;
- (unsigned long long)indexOfEventHandlerName:(id)a0;
- (void)removeEventHandlerName:(id)a0;
- (void)setEventHandlerNames:(id)a0;
- (void)setScriptName:(id)a0;

@end
