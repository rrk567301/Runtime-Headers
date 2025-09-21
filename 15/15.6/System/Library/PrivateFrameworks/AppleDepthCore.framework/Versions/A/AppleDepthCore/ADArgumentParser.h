@class NSString;

@interface ADArgumentParser : ADArgumentParserCommand {
    NSString *_programDescription;
}

- (void).cxx_destruct;
- (char)parse;
- (char)parseArguments:(id)a0;
- (void)addProgramDescription:(id)a0;
- (char)parseStringCommand:(id)a0;

@end
