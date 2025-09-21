@class NSMutableArray;

@interface PQLStatement : NSObject {
    struct sqlite3_stmt { } *_stmt;
    PQLStatement *_next;
    NSMutableArray *_aliveBinds;
    union { unsigned char inlined[8]; unsigned char *ptr; } _specUnion;
    char _inUse;
    char _isTraced;
    short _specLength;
}

@property (readonly, nonatomic) char isTraced;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (char)_prepare:(const char *)a0 withDB:(id)a1 preparationTime:(unsigned long long *)a2;
- (void)bindArguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a0 db:(id)a1;
- (void)bindFromArray:(id)a0 db:(id)a1;
- (id)initWithFormat:(id)a0 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1 db:(id)a2 cache:(struct cache_s { } *)a3 preparationTime:(unsigned long long *)a4;
- (id)initWithQueryBuilder:(id /* block */)a0 db:(id)a1 cache:(struct cache_s { } *)a2 preparationTime:(unsigned long long *)a3;
- (id)initWithStatement:(id)a0 forDB:(id)a1 preparationTime:(unsigned long long *)a2;
- (void)keepBindAlive:(id)a0;
- (id)translate:(id)a0 hasInjections:(char *)a1 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
- (id)translate:(id)a0 withBuilder:(id)a1;
- (void)unbindForDB:(id)a0 returnedRows:(unsigned long long)a1 executionTime:(unsigned long long)a2 preparationTime:(unsigned long long)a3;

@end
