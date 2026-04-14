@interface PKCoreShove : NSObject {
    unsigned long long _optionFlags;
}

@property (copy) id /* block */ loggingBlock;
@property (copy) id /* block */ errorBlock;

+ (id /* block */)genericSyslogLoggingBlock;

- (void).cxx_destruct;
- (int)shoveWithOptions:(id)a0;

@end
