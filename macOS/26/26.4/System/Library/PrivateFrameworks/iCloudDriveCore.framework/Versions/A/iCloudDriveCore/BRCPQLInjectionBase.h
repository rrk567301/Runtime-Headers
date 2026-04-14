@class NSData, NSString, NSObject;
@protocol PQLInjecting;

@interface BRCPQLInjectionBase : NSObject <BRCPQLInjecting> {
    NSObject<PQLInjecting> *_actualInjection;
}

@property (readonly, nonatomic) NSData *sql;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)bindWithStatement:(struct sqlite3_stmt { } *)a0 startingAtIndex:(int)a1;
- (id)initWithActualInjection:(id)a0;

@end
