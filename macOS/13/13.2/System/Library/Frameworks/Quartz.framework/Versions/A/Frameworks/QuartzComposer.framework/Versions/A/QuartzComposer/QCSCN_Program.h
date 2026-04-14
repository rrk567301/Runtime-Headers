@class NSString;
@protocol QCSCN_ProgramDelegate;

@interface QCSCN_Program : NSObject <NSCopying> {
    id _reserved;
}

@property (copy, nonatomic) NSString *vertexShader;
@property (copy, nonatomic) NSString *fragmentShader;
@property (nonatomic) id<QCSCN_ProgramDelegate> delegate;

+ (id)program;

- (void)dealloc;
- (id)name;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (id)parameters;
- (void)setParameters:(id)a0;
- (void)_programWillChange;
- (void)_programDidChange;
- (void)_parameterWithSymbolWillChange:(id)a0;
- (void)_parameterWithSymbolDidChange:(id)a0;
- (void)_delegateDidChange;
- (void)setSemantic:(id)a0 forSymbol:(id)a1 options:(id)a2;
- (void)setSemantic:(id)a0 forSymbol:(id)a1;
- (id)semanticForSymbol:(id)a0;
- (id)optionsForSymbol:(id)a0;
- (void)_createParametersIfNeeded;
- (void)setParameter:(id)a0 forSymbol:(id)a1;
- (id)parameterForSymbol:(id)a0;
- (id)allSymbols;

@end
