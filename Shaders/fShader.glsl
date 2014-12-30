varying highp vec2 textureCoords;
uniform sampler2D textureUniform;

void main()
{
    gl_FragColor = texture2D( textureUniform, textureCoords );
}
